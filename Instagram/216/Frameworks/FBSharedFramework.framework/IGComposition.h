//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class IGLocationMetadata, NSArray, NSDictionary, NSString;

@interface IGComposition : NSObject <NSSecureCoding>
{
    _Bool _isDraft;
    NSString *_compositionIdentifier;
    NSArray *_assets;
    NSString *_uploadIdentifier;
    NSString *_caption;
    NSArray *_internalFeatures;
    NSArray *_productMentions;
    NSDictionary *_gatingInfo;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *gatingInfo; // @synthesize gatingInfo=_gatingInfo;
@property(copy, nonatomic) NSArray *productMentions; // @synthesize productMentions=_productMentions;
@property(copy, nonatomic) NSArray *internalFeatures; // @synthesize internalFeatures=_internalFeatures;
@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, nonatomic) NSString *uploadIdentifier; // @synthesize uploadIdentifier=_uploadIdentifier;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, copy, nonatomic) NSString *compositionIdentifier; // @synthesize compositionIdentifier=_compositionIdentifier;
@property(readonly, nonatomic) long long mediaAudience;
@property(readonly, nonatomic) _Bool commentsDisabled;
@property(readonly, nonatomic) NSString *upcomingEventPk;
@property(readonly, nonatomic) IGLocationMetadata *locationMetadata;
- (id)cloneWithExportPath:(id)arg1 completionGroup:(id)arg2;
- (_Bool)isSharingInfoEdited;
- (_Bool)hasProductTags;
- (id)uniqueProductItemTags;
- (id)uniqueUserTags;
- (id)uniqueFBUserTags;
- (id)uniqueProductMentions;
- (_Bool)containsVideos;
- (_Bool)isVideoOnly;
- (void)updateUploadIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 assets:(id)arg2;

@end
