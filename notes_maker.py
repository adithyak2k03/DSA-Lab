import os
from PyPDF2 import PdfMerger

# Change this to your repo path
BASE_DIR = "D:\Data Structures and Algorithms\DSA-Lab"
OUTPUT_FILE = "All-DSA-PDFs.pdf"
OUTPUT_PATH = os.path.join(BASE_DIR, OUTPUT_FILE)

# def find_pdfs(base_dir):  // BFS
#     pdf_paths = []
#     for root, _, files in os.walk(base_dir):
#         for file in files:
#             if file.endswith(".pdf") and file != OUTPUT_FILE:  # avoid recursive inclusion
#                 pdf_paths.append(os.path.join(root, file))
#     return sorted(pdf_paths)

def find_pdfs_dfs(base_dir):
    pdf_paths = []

    def dfs(current_path):
        entries = sorted(os.listdir(current_path))  # alphabetic order
        for entry in entries:
            full_path = os.path.join(current_path, entry)
            if os.path.isdir(full_path):
                dfs(full_path)  # recursive step: go deep first
            elif entry.endswith(".pdf") and entry != OUTPUT_FILE:
                pdf_paths.append(full_path)

    dfs(base_dir)
    return pdf_paths


def merge_pdfs(pdf_list, output_path):
    if os.path.exists(output_path):
        print(f"⚠️ Existing output file found: {output_path}. Deleting...")
        os.remove(output_path)

    merger = PdfMerger()
    for pdf in pdf_list:
        print(f"➕ Adding: {pdf}")
        merger.append(pdf)
    merger.write(output_path)
    merger.close()
    print(f"\n✅ Merged PDF saved to: {output_path}")

if __name__ == "__main__":
    # all_pdfs = find_pdfs(BASE_DIR) // BFS
    all_pdfs = find_pdfs_dfs(BASE_DIR)
    if all_pdfs:
        merge_pdfs(all_pdfs, OUTPUT_PATH)
    else:
        print("❌ No PDF files found!")
