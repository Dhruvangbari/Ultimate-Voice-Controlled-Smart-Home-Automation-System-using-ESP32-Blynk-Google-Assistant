# Ultimate Voice-Controlled Smart Home Automation (ESP32 + Blynk + Google Assistant) 🏠🎙️

Advanced modular smart home automation system using ESP32, Blynk cloud, and Google Assistant voice commands.
Control your home using voice, mobile app, and IoT cloud.

This project implements an **advanced smart home automation system** using **ESP32**, **Blynk IoT**, and **Google Assistant voice control**.

Unlike basic automation projects, this system follows a **modular embedded architecture**, separating relay control, WiFi handling, and voice integration logic — making it scalable and professional.

Voice control. Cloud connectivity. Clean firmware design.

---

## ⚡ Key Features

- Voice control via Google Assistant
- Mobile app control via Blynk
- ESP32 WiFi-based IoT system
- Modular multi-file firmware architecture
- Relay state synchronization
- Auto WiFi reconnect handling
- Expandable architecture for future upgrades
- Clean GitHub-ready structure

---

## 📂 Project Structure


This layout follows **industry-style embedded firmware design**.

---

## 🔧 Hardware Requirements

- ESP32 Development Board  
- 4-Channel Relay Module  
- AC Loads (Bulb / Fan / Appliances)  
- Stable 5V Power Supply  
- Smartphone with Blynk App  
- Google Assistant enabled device  

⚠️ Relay modules switch AC appliances — handle safely.

---

## 🔌 Pin Connections

| ESP32 GPIO | Relay Channel |
|------------|--------------|
| GPIO26 | Relay 1 |
| GPIO27 | Relay 2 |
| GPIO14 | Relay 3 |
| GPIO12 | Relay 4 |

---

## 📱 Blynk Setup

1. Install **Blynk IoT App**
2. Create ESP32 template
3. Add 4 switch widgets:
   - V0 → Relay 1
   - V1 → Relay 2
   - V2 → Relay 3
   - V3 → Relay 4
4. Copy Auth Token into:



---

## 🧠 Project Overview

The ESP32 connects to WiFi and Blynk cloud.  
Users control appliances using:

- 📱 Blynk mobile app  
- 🎙️ Google Assistant voice commands  

### System Architecture



## Highlights
- Voice control via Google Assistant -> Blynk -> ESP32
- Modular multi-file architecture
- Relay state sync
- Auto reconnection handling
- Clean GitHub-ready structure

## Author
Dhruvang Bari
