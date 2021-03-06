//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************
#pragma once

#import <ImageIO/ImageIOExport.h>

#import <CoreFoundation/CFString.h>

IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGIFDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyJFIFDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyRawDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImageProperty8BIMDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyDNGDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifAuxDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerCanonDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerMinoltaDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerFujiDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerOlympusDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerPentaxDictionary;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyFileSize;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyDPIHeight;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyDPIWidth;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPixelWidth;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPixelHeight;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyDepth;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyOrientation;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIsFloat;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIsIndexed;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyHasAlpha;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyColorModel;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyProfileName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyColorModelRGB;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyColorModelGray;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyColorModelCMYK;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyColorModelLab;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifExposureTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifFNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifExposureProgram;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSpectralSensitivity;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifISOSpeedRatings;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifOECF;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifVersion;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifDateTimeOriginal;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifDateTimeDigitized;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifComponentsConfiguration;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifCompressedBitsPerPixel;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifShutterSpeedValue;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifApertureValue;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifBrightnessValue;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifExposureBiasValue;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifMaxApertureValue;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSubjectDistance;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifMeteringMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifLightSource;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifFlash;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifFocalLength;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSubjectArea;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifMakerNote;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifUserComment;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSubsecTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSubsecTimeOrginal;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSubsecTimeDigitized;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifFlashPixVersion;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifColorSpace;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifPixelXDimension;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifPixelYDimension;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifRelatedSoundFile;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifFlashEnergy;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSpatialFrequencyResponse;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifFocalPlaneXResolution;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifFocalPlaneYResolution;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifFocalPlaneResolutionUnit;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSubjectLocation;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifExposureIndex;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSensingMethod;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifFileSource;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSceneType;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifCFAPattern;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifCustomRendered;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifExposureMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifWhiteBalance;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifDigitalZoomRatio;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifFocalLenIn35mmFilm;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSceneCaptureType;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifGainControl;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifContrast;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSaturation;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSharpness;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifDeviceSettingDescription;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifSubjectDistRange;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifImageUniqueID;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifGamma;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifCameraOwnerName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifBodySerialNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifLensSpecification;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifLensMake;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifLensModel;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifLensSerialNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifAuxLensInfo;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifAuxLensModel;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifAuxSerialNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifAuxLensID;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifAuxLensSerialNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifAuxImageNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifAuxFlashCompensation;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifAuxOwnerName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyExifAuxFirmware;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGIFLoopCount;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGIFDelayTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGIFImageColorMap;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGIFHasGlobalColorMap;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGIFUnclampedDelayTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSVersion;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSLatitudeRef;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSLatitude;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSLongitudeRef;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSLongitude;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSAltitudeRef;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSAltitude;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSTimeStamp;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSSatellites;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSStatus;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSMeasureMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDOP;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSSpeedRef;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSSpeed;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSTrackRef;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSTrack;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSImgDirectionRef;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSImgDirection;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSMapDatum;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDestLatitudeRef;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDestLatitude;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDestLongitudeRef;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDestLongitude;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDestBearingRef;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDestBearing;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDestDistanceRef;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDestDistance;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSProcessingMethod;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSAreaInformation;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDateStamp;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyGPSDifferental;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCObjectTypeReference;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCObjectAttributeReference;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCObjectName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCEditStatus;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCEditorialUpdate;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCUrgency;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCSubjectReference;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCCategory;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCSupplementalCategory;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCFixtureIdentifier;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCKeywords;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContentLocationCode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContentLocationName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCReleaseDate;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCReleaseTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCExpirationDate;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCExpirationTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCSpecialInstructions;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCActionAdvised;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCReferenceService;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCReferenceDate;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCReferenceNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCDateCreated;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCTimeCreated;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCDigitalCreationDate;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCDigitalCreationTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCOriginatingProgram;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCProgramVersion;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCObjectCycle;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCByline;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCBylineTitle;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCCity;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCSubLocation;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCProvinceState;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCCountryPrimaryLocationCode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCCountryPrimaryLocationName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCOriginalTransmissionReference;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCHeadline;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCCredit;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCSource;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCCopyrightNotice;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContact;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCCaptionAbstract;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCWriterEditor;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCImageType;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCImageOrientation;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCLanguageIdentifier;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCStarRating;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCCreatorContactInfo;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCRightsUsageTerms;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCScene;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContactInfoCity;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContactInfoCountry;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContactInfoAddress;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContactInfoPostalCode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContactInfoStateProvince;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContactInfoEmails;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContactInfoPhones;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyIPTCContactInfoWebURLs;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyJFIFVersion;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyJFIFXDensity;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyJFIFYDensity;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyJFIFDensityUnit;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyJFIFIsProgressive;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGGamma;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGInterlaceType;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGXPixelsPerMeter;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGYPixelsPerMeter;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGsRGBIntent;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGChromaticities;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGAuthor;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGCopyright;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGCreationTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGDescription;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGModificationTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGSoftware;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyPNGTitle;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFCompression;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFPhotometricInterpretation;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFDocumentName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFImageDescription;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFMake;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFModel;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFOrientation;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFXResolution;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFYResolution;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFResolutionUnit;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFSoftware;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFTransferFunction;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFDateTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFArtist;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFHostComputer;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFCopyright;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFWhitePoint;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyTIFFPrimaryChromaticities;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyDNGVersion;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyDNGBackwardVersion;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyDNGUniqueCameraModel;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyDNGLocalizedCameraModel;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyDNGCameraSerialNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyDNGLensInfo;
IMAGEIO_EXPORT const CFStringRef kCGImageProperty8BIMLayerNames;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFDescription;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFFirmware;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFOwnerName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFImageName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFImageFileName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFReleaseMethod;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFReleaseTiming;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFRecordID;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFSelfTimingTime;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFCameraSerialNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFImageSerialNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFContinuousDrive;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFFocusMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFMeteringMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFShootingMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFLensMaxMM;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFLensMinMM;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFLensModel;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFWhiteBalanceIndex;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFFlashExposureComp;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyCIFFMeasuredEV;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonISOSetting;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonColorMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonQuality;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonWhiteBalanceMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonSharpenMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonFocusMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonFlashSetting;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonISOSelection;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonFlashExposureComp;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonImageAdjustment;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonLensAdapter;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonLensType;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonLensInfo;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonFocusDistance;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonDigitalZoom;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonShootingMode;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonShutterCount;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerNikonCameraSerialNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerCanonOwnerName;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerCanonCameraSerialNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerCanonImageSerialNumber;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerCanonFlashExposureComp;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerCanonContinuousDrive;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerCanonLensModel;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerCanonFirmware;
IMAGEIO_EXPORT const CFStringRef kCGImagePropertyMakerCanonAspectRatioInfo;
