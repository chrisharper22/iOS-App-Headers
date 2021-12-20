//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMedia, IGPostItem, IGUserSession;

@interface IGFeedPostStickerFactory : NSObject
{
    _Bool _hideLabel;
    _Bool _hidePreviewImage;
    _Bool _hideIconImage;
    _Bool _disableTapOptions;
    _Bool _isNonDeletable;
    IGMedia *_media;
    IGPostItem *_selectedPost;
    IGUserSession *_userSession;
    long long _firstDisplayType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNonDeletable; // @synthesize isNonDeletable=_isNonDeletable;
@property(nonatomic) _Bool disableTapOptions; // @synthesize disableTapOptions=_disableTapOptions;
@property(nonatomic) long long firstDisplayType; // @synthesize firstDisplayType=_firstDisplayType;
@property(nonatomic) _Bool hideIconImage; // @synthesize hideIconImage=_hideIconImage;
@property(nonatomic) _Bool hidePreviewImage; // @synthesize hidePreviewImage=_hidePreviewImage;
@property(nonatomic) _Bool hideLabel; // @synthesize hideLabel=_hideLabel;
@property(readonly, nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGPostItem *selectedPost; // @synthesize selectedPost=_selectedPost;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
- (id)feedPostSticker;
- (id)_feedPostStickerForDisplayType:(long long)arg1;
- (id)initWithMedia:(id)arg1 selectedPost:(id)arg2 userSession:(id)arg3;

@end
