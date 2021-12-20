//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGUser, NSArray, NSString;
@protocol IGExpiringMediaPosting;

@interface IGDirectPublishedMessageSharedStoryReply : FBValueObject <NSCopying, NSCoding>
{
    _Bool _canRepost;
    _Bool _shouldPersistInThread;
    id <IGExpiringMediaPosting> _story;
    NSString *_reelId;
    NSString *_reelTypeString;
    NSArray *_mentionedUsers;
    IGUser *_locationTaggedUser;
    NSArray *_brandedContentSponsors;
    IGUser *_sponsorUser;
    NSString *_countdownId;
    NSString *_smbSupportStickerType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *smbSupportStickerType; // @synthesize smbSupportStickerType=_smbSupportStickerType;
@property(readonly, copy, nonatomic) NSString *countdownId; // @synthesize countdownId=_countdownId;
@property(readonly, nonatomic) _Bool shouldPersistInThread; // @synthesize shouldPersistInThread=_shouldPersistInThread;
@property(readonly, nonatomic) _Bool canRepost; // @synthesize canRepost=_canRepost;
@property(readonly, copy, nonatomic) IGUser *sponsorUser; // @synthesize sponsorUser=_sponsorUser;
@property(readonly, copy, nonatomic) NSArray *brandedContentSponsors; // @synthesize brandedContentSponsors=_brandedContentSponsors;
@property(readonly, copy, nonatomic) IGUser *locationTaggedUser; // @synthesize locationTaggedUser=_locationTaggedUser;
@property(readonly, copy, nonatomic) NSArray *mentionedUsers; // @synthesize mentionedUsers=_mentionedUsers;
@property(readonly, copy, nonatomic) NSString *reelTypeString; // @synthesize reelTypeString=_reelTypeString;
@property(readonly, copy, nonatomic) NSString *reelId; // @synthesize reelId=_reelId;
@property(readonly, nonatomic) id <IGExpiringMediaPosting> story; // @synthesize story=_story;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStory:(id)arg1 reelId:(id)arg2 reelTypeString:(id)arg3 mentionedUsers:(id)arg4 locationTaggedUser:(id)arg5 brandedContentSponsors:(id)arg6 sponsorUser:(id)arg7 canRepost:(_Bool)arg8 shouldPersistInThread:(_Bool)arg9 countdownId:(id)arg10 smbSupportStickerType:(id)arg11;
- (id)initWithCoder:(id)arg1;

@end
