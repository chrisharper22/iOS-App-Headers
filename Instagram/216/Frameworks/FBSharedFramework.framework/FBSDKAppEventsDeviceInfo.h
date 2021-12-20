//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBSDKDeviceInformationProviding-Protocol.h>

@class NSString;
@protocol FBSDKSettings;

@interface FBSDKAppEventsDeviceInfo : NSObject <FBSDKDeviceInformationProviding>
{
    _Bool _isEncodingDirty;
    NSString *_encodedDeviceInfo;
    NSString *_carrierName;
    NSString *_timeZoneAbbrev;
    unsigned long long _remainingDiskSpaceGB;
    NSString *_timeZoneName;
    NSString *_bundleIdentifier;
    NSString *_longVersion;
    NSString *_shortVersion;
    NSString *_sysVersion;
    NSString *_machine;
    NSString *_language;
    unsigned long long _totalDiskSpaceGB;
    unsigned long long _coreCount;
    double _width;
    double _height;
    double _density;
    long long _lastGroup1CheckTime;
    id <FBSDKSettings> _settings;
}

+ (id)_getCarrier;
+ (unsigned int)_readCoreCount;
+ (id)_getRemainingDiskSpace;
+ (id)_getTotalDiskSpace;
+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FBSDKSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) _Bool isEncodingDirty; // @synthesize isEncodingDirty=_isEncodingDirty;
@property(nonatomic) long long lastGroup1CheckTime; // @synthesize lastGroup1CheckTime=_lastGroup1CheckTime;
@property(nonatomic) double density; // @synthesize density=_density;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) unsigned long long coreCount; // @synthesize coreCount=_coreCount;
@property(nonatomic) unsigned long long totalDiskSpaceGB; // @synthesize totalDiskSpaceGB=_totalDiskSpaceGB;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *machine; // @synthesize machine=_machine;
@property(retain, nonatomic) NSString *sysVersion; // @synthesize sysVersion=_sysVersion;
@property(retain, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(retain, nonatomic) NSString *longVersion; // @synthesize longVersion=_longVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(nonatomic) unsigned long long remainingDiskSpaceGB; // @synthesize remainingDiskSpaceGB=_remainingDiskSpaceGB;
@property(retain, nonatomic) NSString *timeZoneAbbrev; // @synthesize timeZoneAbbrev=_timeZoneAbbrev;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
- (double)unixTimeNow;
- (id)_generateEncoding;
- (void)_collectGroup1Data;
- (_Bool)_isGroup1Expired;
- (void)_collectPersistentData;
@property(retain, nonatomic) NSString *encodedDeviceInfo; // @synthesize encodedDeviceInfo=_encodedDeviceInfo;
@property(readonly, nonatomic) NSString *storageKey;
- (void)configureWithSettings:(id)arg1;

@end
