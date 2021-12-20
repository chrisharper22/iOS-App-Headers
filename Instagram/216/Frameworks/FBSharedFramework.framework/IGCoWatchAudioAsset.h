//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSundialAudioAssetProtocol-Protocol.h>

@class IGUser, NSArray, NSString, NSURL;

@interface IGCoWatchAudioAsset : NSObject <IGSundialAudioAssetProtocol>
{
    NSString *_audioTitle;
    NSString *_artistName;
    NSString *_pk;
    NSString *_audioAssetId;
    NSString *_audioClusterId;
    IGUser *_artist;
    _Bool _shouldMuteAudio;
    NSString *_shouldMuteAudioReason;
    _Bool _useOfAudioDisabled;
    long long _durationInMs;
    NSString *_originalAudioAssetId;
    _Bool _isExplicit;
    NSURL *_albumArtUrl;
    NSURL *_albumArtThumbnailUrl;
    double _audioStartTime;
    NSString *_videoCountString;
    _Bool _isTrending;
    NSArray *_audioParts;
    long long _audioAssetType;
    _Bool _isBookmarked;
    NSURL *_audioFileUrl;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBookmarked; // @synthesize isBookmarked=_isBookmarked;
@property(readonly, nonatomic) long long audioAssetType; // @synthesize audioAssetType=_audioAssetType;
@property(readonly, nonatomic) NSArray *audioParts; // @synthesize audioParts=_audioParts;
@property(readonly, nonatomic) _Bool isTrending; // @synthesize isTrending=_isTrending;
@property(readonly, copy, nonatomic) NSString *videoCountString; // @synthesize videoCountString=_videoCountString;
@property(readonly, nonatomic) double audioStartTime; // @synthesize audioStartTime=_audioStartTime;
@property(readonly, copy, nonatomic) NSURL *audioFileUrl; // @synthesize audioFileUrl=_audioFileUrl;
@property(readonly, copy, nonatomic) NSURL *albumArtThumbnailUrl; // @synthesize albumArtThumbnailUrl=_albumArtThumbnailUrl;
@property(readonly, copy, nonatomic) NSURL *albumArtUrl; // @synthesize albumArtUrl=_albumArtUrl;
@property(readonly, nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(readonly, copy, nonatomic) NSString *originalAudioAssetId; // @synthesize originalAudioAssetId=_originalAudioAssetId;
@property(readonly, nonatomic) long long durationInMs; // @synthesize durationInMs=_durationInMs;
@property(readonly, nonatomic) _Bool useOfAudioDisabled; // @synthesize useOfAudioDisabled=_useOfAudioDisabled;
@property(readonly, copy, nonatomic) NSString *shouldMuteAudioReason; // @synthesize shouldMuteAudioReason=_shouldMuteAudioReason;
@property(readonly, nonatomic) _Bool shouldMuteAudio; // @synthesize shouldMuteAudio=_shouldMuteAudio;
@property(readonly, copy, nonatomic) IGUser *artist; // @synthesize artist=_artist;
@property(readonly, copy, nonatomic) NSString *audioClusterId; // @synthesize audioClusterId=_audioClusterId;
@property(readonly, copy, nonatomic) NSString *audioAssetId; // @synthesize audioAssetId=_audioAssetId;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, copy, nonatomic) NSString *artistDisplayName; // @synthesize artistDisplayName=_artistName;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_audioTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAudioTitle:(id)arg1 artistName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
