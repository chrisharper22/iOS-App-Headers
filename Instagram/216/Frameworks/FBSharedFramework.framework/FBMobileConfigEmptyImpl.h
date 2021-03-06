//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBMobileConfigAPI-Protocol.h>

@class NSString;

@interface FBMobileConfigEmptyImpl : NSObject <FBMobileConfigAPI>
{
}

+ (id)sharedInstance;
- (_Bool)addGlobalChangeListener:(CDUnknownBlockType)arg1;
- (_Bool)addChangeListener:(CDUnknownBlockType)arg1 forConfig:(unsigned int)arg2;
- (id)accessedConfigs;
- (id)latestContextForConfig;
- (id)contextForConfig:(unsigned int)arg1;
- (int)getUnitType;
- (int)getEpVersion:(unsigned int)arg1;
- (_Bool)hasValidConfig;
- (id)getLoggingID:(unsigned long long)arg1;
- (void)logExposureForStringParameter:(CDStruct_69d7cc99)arg1;
- (void)logExposureForInt64Parameter:(CDStruct_69d7cc99)arg1;
- (void)logExposureForDoubleParameter:(CDStruct_69d7cc99)arg1;
- (void)logExposureForBoolParameter:(CDStruct_69d7cc99)arg1;
- (void)logExposureForConfigParameter:(unsigned long long)arg1;
- (id)getMapKeys:(CDStruct_69d7cc99)arg1;
- (id)getMapValueForParam:(CDStruct_69d7cc99)arg1 withKey:(id)arg2;
- (double)getDoubleWithoutLogging:(CDStruct_69d7cc99)arg1 withDefault:(double)arg2;
- (double)getDoubleWithoutLogging:(CDStruct_69d7cc99)arg1;
- (double)getDouble:(CDStruct_69d7cc99)arg1 withOptions:(id)arg2 withDefault:(double)arg3;
- (double)getDouble:(CDStruct_69d7cc99)arg1 withOptions:(id)arg2;
- (double)getDouble:(CDStruct_69d7cc99)arg1 withDefault:(double)arg2;
- (double)getDouble:(CDStruct_69d7cc99)arg1;
- (id)getStringWithoutLogging:(CDStruct_69d7cc99)arg1 withDefault:(id)arg2;
- (id)getStringWithoutLogging:(CDStruct_69d7cc99)arg1;
- (id)getString:(CDStruct_69d7cc99)arg1 withOptions:(id)arg2 withDefault:(id)arg3;
- (id)getString:(CDStruct_69d7cc99)arg1 withOptions:(id)arg2;
- (id)getString:(CDStruct_69d7cc99)arg1 withDefault:(id)arg2;
- (id)getString:(CDStruct_69d7cc99)arg1;
- (long long)getInt64WithoutLogging:(CDStruct_69d7cc99)arg1 withDefault:(long long)arg2;
- (long long)getInt64WithoutLogging:(CDStruct_69d7cc99)arg1;
- (long long)getInt64:(CDStruct_69d7cc99)arg1 withOptions:(id)arg2 withDefault:(long long)arg3;
- (long long)getInt64:(CDStruct_69d7cc99)arg1 withOptions:(id)arg2;
- (long long)getInt64:(CDStruct_69d7cc99)arg1 withDefault:(long long)arg2;
- (long long)getInt64:(CDStruct_69d7cc99)arg1;
- (_Bool)getBoolWithoutLogging:(CDStruct_69d7cc99)arg1 withDefault:(_Bool)arg2;
- (_Bool)getBoolWithoutLogging:(CDStruct_69d7cc99)arg1;
- (_Bool)getBool:(CDStruct_69d7cc99)arg1 withOptions:(id)arg2 withDefault:(_Bool)arg3;
- (_Bool)getBool:(CDStruct_69d7cc99)arg1 withOptions:(id)arg2;
- (_Bool)getBool:(CDStruct_69d7cc99)arg1 withDefault:(_Bool)arg2;
- (_Bool)getBool:(CDStruct_69d7cc99)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

