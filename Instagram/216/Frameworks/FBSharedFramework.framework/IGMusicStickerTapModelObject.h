//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMusicBookmarkableStoriesAudioProtocol-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGUser, NSString, NSURL;

@interface IGMusicStickerTapModelObject : NSObject <NSCoding, IGMusicBookmarkableStoriesAudioProtocol>
{
    _Bool _isBookmarked;
    _Bool _shouldMuteAudio;
    _Bool _isExplicit;
    _Bool _hasLyrics;
    NSString *_pk;
    NSString *_audioClusterId;
    NSString *_originalAudioAssetId;
    NSString *_title;
    NSString *_artistName;
    NSURL *_artistPictureURL;
    IGUser *_artist;
    NSURL *_albumArtURL;
    NSURL *_albumArtThumbnailURL;
    long long _highlightTimeInMilliseconds;
    long long _displayType;
    double _startTime;
    double _duration;
    NSURL *_audioFileURL;
    NSString *_audioMutedReason;
    NSString *_browseSessionID;
    NSString *_productName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(readonly, copy, nonatomic) NSString *browseSessionID; // @synthesize browseSessionID=_browseSessionID;
@property(readonly, nonatomic) _Bool hasLyrics; // @synthesize hasLyrics=_hasLyrics;
@property(readonly, nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(readonly, copy, nonatomic) NSString *audioMutedReason; // @synthesize audioMutedReason=_audioMutedReason;
@property(readonly, nonatomic) _Bool shouldMuteAudio; // @synthesize shouldMuteAudio=_shouldMuteAudio;
@property(readonly, nonatomic) NSURL *audioFileURL; // @synthesize audioFileURL=_audioFileURL;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) long long highlightTimeInMilliseconds; // @synthesize highlightTimeInMilliseconds=_highlightTimeInMilliseconds;
@property(readonly, nonatomic) NSURL *albumArtThumbnailURL; // @synthesize albumArtThumbnailURL=_albumArtThumbnailURL;
@property(readonly, nonatomic) NSURL *albumArtURL; // @synthesize albumArtURL=_albumArtURL;
@property(readonly, copy, nonatomic) IGUser *artist; // @synthesize artist=_artist;
@property(readonly, nonatomic) NSURL *artistPictureURL; // @synthesize artistPictureURL=_artistPictureURL;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isBookmarked; // @synthesize isBookmarked=_isBookmarked;
@property(readonly, nonatomic) NSString *originalAudioAssetId; // @synthesize originalAudioAssetId=_originalAudioAssetId;
@property(readonly, copy, nonatomic) NSString *audioClusterId; // @synthesize audioClusterId=_audioClusterId;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (id)musicAttributionText;
- (id)sharingInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 displayType:(id)arg2 userStore:(id)arg3;
- (id)initWithPk:(id)arg1 audioClusterId:(id)arg2 title:(id)arg3 artistName:(id)arg4 artistPictureURL:(id)arg5 artist:(id)arg6 albumArtURL:(id)arg7 albumArtThumbnailURL:(id)arg8 highlightTimeInMilliseconds:(long long)arg9 displayType:(long long)arg10 startTime:(double)arg11 duration:(double)arg12 audioFileURL:(id)arg13 shouldMuteAudio:(_Bool)arg14 audioMutedReason:(id)arg15 isExplicit:(_Bool)arg16 hasLyrics:(_Bool)arg17 browseSessionID:(id)arg18 productName:(id)arg19 isBookmarked:(_Bool)arg20;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

