//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAudioBrowserListCellModel-Protocol.h>

@class IGAsyncTask, NSString, UIImage;

@interface IGAudioBrowserHeaderCellModel : NSObject <IGAudioBrowserListCellModel>
{
    _Bool _disableSeeMore;
    long long _embeddedAudioType;
    NSString *_uuid;
    NSString *_pk;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_iconImage;
    UIImage *_videoHeaderPreviewImage;
    unsigned long long _type;
    IGAsyncTask *_preloadedPlaylistRequest;
    long long _sectionIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(readonly, nonatomic) IGAsyncTask *preloadedPlaylistRequest; // @synthesize preloadedPlaylistRequest=_preloadedPlaylistRequest;
@property(nonatomic, getter=shouldDisableSeeMore) _Bool disableSeeMore; // @synthesize disableSeeMore=_disableSeeMore;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) UIImage *videoHeaderPreviewImage; // @synthesize videoHeaderPreviewImage=_videoHeaderPreviewImage;
@property(readonly, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) long long embeddedAudioType; // @synthesize embeddedAudioType=_embeddedAudioType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUUID:(id)arg1 pk:(id)arg2 title:(id)arg3 subtitle:(id)arg4 type:(unsigned long long)arg5 embeddedAudioType:(long long)arg6;
- (id)initWithUUID:(id)arg1 pk:(id)arg2 title:(id)arg3 type:(unsigned long long)arg4;
- (id)initWithUUID:(id)arg1 pk:(id)arg2 title:(id)arg3 subtitle:(id)arg4 iconImage:(id)arg5 videoHeaderPreviewImage:(id)arg6 type:(unsigned long long)arg7 embeddedAudioType:(long long)arg8 preloadedPlaylistRequest:(id)arg9;
- (id)initWithUUID:(id)arg1 pk:(id)arg2 title:(id)arg3 subtitle:(id)arg4 iconImage:(id)arg5 videoHeaderPreviewImage:(id)arg6 type:(unsigned long long)arg7 embeddedAudioType:(long long)arg8;

@end

