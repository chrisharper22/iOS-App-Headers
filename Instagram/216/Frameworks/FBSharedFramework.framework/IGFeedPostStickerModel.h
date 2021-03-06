//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGStickerModelType-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class IGUpcomingEvent, IGUser, NSString, NSURL;

@interface IGFeedPostStickerModel : NSObject <NSSecureCoding, IGStickerModelType>
{
    _Bool _includeInRecent;
    _Bool _isArchive;
    _Bool _isVideoMedia;
    _Bool _isSidecarMedia;
    _Bool _hasProductTags;
    _Bool _hidePreviewImage;
    _Bool _hideIconImage;
    _Bool _isResharedMediaIdOwnedByViewer;
    NSString *_pk;
    NSURL *_userProfilePictureUrl;
    IGUser *_user;
    IGUser *_coauthorUser;
    NSString *_caption;
    NSString *_selectedPostId;
    long long _displayType;
    NSURL *_mediaImageUrl;
    double _mediaAspectRatio;
    NSString *_mediaOwnerPk;
    NSString *_productType;
    IGUpcomingEvent *_upcomingEvent;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isResharedMediaIdOwnedByViewer; // @synthesize isResharedMediaIdOwnedByViewer=_isResharedMediaIdOwnedByViewer;
@property(readonly, nonatomic) IGUpcomingEvent *upcomingEvent; // @synthesize upcomingEvent=_upcomingEvent;
@property(readonly, nonatomic) _Bool hideIconImage; // @synthesize hideIconImage=_hideIconImage;
@property(readonly, nonatomic) _Bool hidePreviewImage; // @synthesize hidePreviewImage=_hidePreviewImage;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *mediaOwnerPk; // @synthesize mediaOwnerPk=_mediaOwnerPk;
@property(readonly, nonatomic) double mediaAspectRatio; // @synthesize mediaAspectRatio=_mediaAspectRatio;
@property(readonly, copy, nonatomic) NSURL *mediaImageUrl; // @synthesize mediaImageUrl=_mediaImageUrl;
@property(readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) _Bool hasProductTags; // @synthesize hasProductTags=_hasProductTags;
@property(readonly, nonatomic) NSString *selectedPostId; // @synthesize selectedPostId=_selectedPostId;
@property(readonly, nonatomic) _Bool isSidecarMedia; // @synthesize isSidecarMedia=_isSidecarMedia;
@property(readonly, nonatomic) _Bool isVideoMedia; // @synthesize isVideoMedia=_isVideoMedia;
@property(readonly, nonatomic) _Bool isArchive; // @synthesize isArchive=_isArchive;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, nonatomic) IGUser *coauthorUser; // @synthesize coauthorUser=_coauthorUser;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSURL *userProfilePictureUrl; // @synthesize userProfilePictureUrl=_userProfilePictureUrl;
@property(readonly, nonatomic) _Bool includeInRecent; // @synthesize includeInRecent=_includeInRecent;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPk:(id)arg1 userProfilePictureUrl:(id)arg2 user:(id)arg3 caption:(id)arg4 displayType:(long long)arg5 isArchive:(_Bool)arg6 isVideoMedia:(_Bool)arg7 isSidecarMedia:(_Bool)arg8 selectedPostId:(id)arg9 hasProductTags:(_Bool)arg10 mediaImageUrl:(id)arg11 mediaAspectRatio:(double)arg12 mediaOwnerPk:(id)arg13 productType:(id)arg14 hidePreviewImage:(_Bool)arg15 hideIconImage:(_Bool)arg16 upcomingEvent:(id)arg17 isResharedMediaIdOwnedByViewer:(_Bool)arg18 coauthorUser:(id)arg19;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

