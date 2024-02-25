# Smart Healthcare System using Blockchain 

## Project Overview

The Smart Healthcare System using Blockchain is a project aimed at addressing one of the significant challenges in the healthcare industry – fragmented health records. The implementation utilizes blockchain technology to create a secure and efficient platform for managing electronic health records (EHR). The core idea involves placing medical record transactions on the blockchain, enabling a smart healthcare ecosystem.

## Problem Statement

In the current healthcare landscape, organizations hold multiple and fragmented health records about patients. This project seeks to solve this issue by implementing a system where each patient has a dedicated block on the blockchain, with their electronic health record. A smart contract is employed to provide customized access to the patient's EHR, facilitating interactions with healthcare providers, insurers, and ensuring secure and streamlined payment settlements.

## Basic Formalities

### User Authentication
- Sign up/Login for Patients, Doctors, and Insurers.
- Unique identification using CNIC to generate a hash.

### Data Storage
- Storing personal and medical details of patients in the form of a hash table.
- Use of CNIC as a unique key for generating hashes.

### Patient Empowerment
- Patients can conveniently update their details.
- Ability to share medical data with chosen doctors and insurers.
- Option to view specific information and update health charges.

### Security Measures
- Confidentiality maintained through a unique key.
- Users can choose preferred collision resolution methods (Linear Probing or Separate Chaining) at runtime.

## Techniques Used

### Hash Table
- Each patient has a dedicated block in the hash table.
- CNIC is used as a key for assigning blocks.

### Hash Functions
- Insert function: To add new patient data.
- Search function: To find a specific block/patient.
- Remove function: To delete a patient's record.

### Array of Objects
- Objects of doctors/insurers for efficient data organization.

### Collision Resolution
- Users can choose between Linear Probing and Separate Chaining.
- Linear Probing allocates each key its own slot.
- Separate Chaining stores keys with the same hashes using linked lists.

### Linked Lists
- Utilized for storing data in case of separate chaining.

### Object-Oriented Programming (OOP) Concepts
- Use of classes, constructors, and objects for structured code organization.

## How to Use

1. Clone the repository.
2. Run the application.
3. Sign up or log in as a Patient, Doctor, or Insurer.
4. Access and manage electronic health records.
5. Choose collision resolution method as needed.
