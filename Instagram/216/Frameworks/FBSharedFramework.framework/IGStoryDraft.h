//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSerializable-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGAsyncTask, NSDate, NSString, NSUUID;

@interface IGStoryDraft : NSObject <NSCopying, IGSerializable>
{
    NSString *_previewImageResource;
    NSUUID *_identifier;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    double _duration;
    IGAsyncTask *_previewImage;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGAsyncTask *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 creationDate:(id)arg2 modificationDate:(id)arg3 duration:(double)arg4 previewImage:(id)arg5;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, nonatomic) double timeLeftBeforeExpiration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

