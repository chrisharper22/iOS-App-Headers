//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGAdItem, IGCommentModel, IGDirectHScrollXMA, IGDirectPublishedMessageSharedLiveVideoAction, IGDirectPublishedMessageSharedStoryAction, IGDirectPublishedMessageStatusReply, IGGuide, IGLocation, IGMedia, IGProductItem, IGUser, NSArray, NSNumber, NSString;
@protocol IGExpiringMediaPosting, IGSponsoredInfoProviding;

@interface IGDirectPublishedMessageSharedAttachment : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGLocation *_location_location;
    NSArray *_location_previewMediaForLocation;
    IGUser *_profile_user;
    NSArray *_profile_previewMediaForProfile;
    NSString *_hashtag_hashtag;
    NSNumber *_hashtag_serverMediaCount;
    NSArray *_hashtag_previewMediaForHashtag;
    IGMedia *_post_media;
    id <IGSponsoredInfoProviding> _post_sponsoredInfoProvider;
    unsigned long long _post_shareType;
    unsigned long long _post_shareSource;
    IGCommentModel *_post_previewComment;
    NSString *_post_postItemPk;
    IGDirectHScrollXMA *_post_xma;
    IGMedia *_felix_felixFeedItem;
    IGMedia *_sundial_sundialFeedItem;
    IGAdItem *_sundial_sundialAdItem;
    long long _liveVideo_textType;
    long long _liveVideo_playbackOffset;
    IGDirectPublishedMessageSharedLiveVideoAction *_liveVideo_liveVideoAction;
    id <IGExpiringMediaPosting> _story_story;
    IGDirectPublishedMessageSharedStoryAction *_story_action;
    IGProductItem *_product;
    IGDirectPublishedMessageStatusReply *_statusReply;
    IGGuide *_guide;
}

+ (id)sundialWithSundialFeedItem:(id)arg1 sundialAdItem:(id)arg2;
+ (id)storyWithStory:(id)arg1 action:(id)arg2;
+ (id)statusReply:(id)arg1;
+ (id)profileWithUser:(id)arg1 previewMediaForProfile:(id)arg2;
+ (id)product:(id)arg1;
+ (id)postWithMedia:(id)arg1 sponsoredInfoProvider:(id)arg2 shareType:(unsigned long long)arg3 shareSource:(unsigned long long)arg4 previewComment:(id)arg5 postItemPk:(id)arg6 xma:(id)arg7;
+ (id)locationWithLocation:(id)arg1 previewMediaForLocation:(id)arg2;
+ (id)liveVideoWithTextType:(long long)arg1 playbackOffset:(long long)arg2 liveVideoAction:(id)arg3;
+ (id)hashtagWithHashtag:(id)arg1 serverMediaCount:(id)arg2 previewMediaForHashtag:(id)arg3;
+ (id)guide:(id)arg1;
+ (id)felixWithFelixFeedItem:(id)arg1;
- (void).cxx_destruct;
- (void)matchLocation:(CDUnknownBlockType)arg1 profile:(CDUnknownBlockType)arg2 hashtag:(CDUnknownBlockType)arg3 post:(CDUnknownBlockType)arg4 felix:(CDUnknownBlockType)arg5 sundial:(CDUnknownBlockType)arg6 liveVideo:(CDUnknownBlockType)arg7 story:(CDUnknownBlockType)arg8 product:(CDUnknownBlockType)arg9 statusReply:(CDUnknownBlockType)arg10 guide:(CDUnknownBlockType)arg11;
- (_Bool)matchBooleanLocation:(CDUnknownBlockType)arg1 profile:(CDUnknownBlockType)arg2 hashtag:(CDUnknownBlockType)arg3 post:(CDUnknownBlockType)arg4 felix:(CDUnknownBlockType)arg5 sundial:(CDUnknownBlockType)arg6 liveVideo:(CDUnknownBlockType)arg7 story:(CDUnknownBlockType)arg8 product:(CDUnknownBlockType)arg9 statusReply:(CDUnknownBlockType)arg10 guide:(CDUnknownBlockType)arg11;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

