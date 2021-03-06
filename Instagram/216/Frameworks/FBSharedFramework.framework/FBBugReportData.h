//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FBBugReportData : NSObject
{
    NSMutableDictionary *_contextToBuffers;
    NSMutableDictionary *_attachmentKeysToPath;
    NSMutableSet *_contextsToUploadWithInitialCreationRequest;
    NSMutableDictionary *_infoItems;
    CDUnknownBlockType _bufferCapacityConfig;
    _Bool _ignoreLongInfoItemWarning;
    NSString *_suggestedCategoryID;
    unsigned long long _dataUploadUserConsent;
}

+ (id)sharedBugReportData;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreLongInfoItemWarning; // @synthesize ignoreLongInfoItemWarning=_ignoreLongInfoItemWarning;
@property(nonatomic) unsigned long long dataUploadUserConsent; // @synthesize dataUploadUserConsent=_dataUploadUserConsent;
@property(copy, nonatomic) NSString *suggestedCategoryID; // @synthesize suggestedCategoryID=_suggestedCategoryID;
- (_Bool)canUploadUserData;
- (void)resetDataUploadUserConsent;
- (void)addInfoItem:(id)arg1 value:(id)arg2;
- (id)allInfoItems;
- (void)removeAttachmentByKey:(id)arg1;
- (void)addAttachmentPath:(id)arg1 withKey:(id)arg2;
- (id)allAttachmentPathsByKey;
- (id)allAttachmentPaths;
- (void)initialCreationRequestShouldContainAttachmentInformationForContext:(id)arg1;
- (id)contextsToUploadWithInitialCreationRequest;
- (void)appendToContext:(id)arg1 withFormat:(id)arg2;
- (void)setContentsOfContext:(id)arg1 toValue:(id)arg2;
- (void)setCapacity:(unsigned long long)arg1 forContext:(id)arg2;
- (id)stringForContext:(id)arg1;
- (id)_bufferForContextWhileSynchronized:(id)arg1;
- (id)allContexts;
- (void)resetData;
- (id)initWithBufferCapacityConfig:(CDUnknownBlockType)arg1;

@end

