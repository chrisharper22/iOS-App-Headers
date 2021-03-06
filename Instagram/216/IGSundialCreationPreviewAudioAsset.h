//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSundialAudioAssetProtocol-Protocol.h"

@class IGUser, NSArray, NSString, NSURL;

@interface IGSundialCreationPreviewAudioAsset : NSObject <IGSundialAudioAssetProtocol>
{
    _Bool _shouldMuteAudio;
    _Bool _useOfAudioDisabled;
    _Bool _isExplicit;
    _Bool _isBookmarked;
    _Bool _isTrending;
    NSString *_pk;
    NSString *_audioAssetId;
    NSString *_audioClusterId;
    NSString *_title;
    IGUser *_artist;
    NSString *_artistDisplayName;
    NSString *_shouldMuteAudioReason;
    long long _durationInMs;
    NSString *_originalAudioAssetId;
    NSURL *_albumArtUrl;
    NSURL *_albumArtThumbnailUrl;
    NSURL *_audioFileUrl;
    double _audioStartTime;
    NSString *_videoCountString;
    NSArray *_audioParts;
    long long _audioAssetType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long audioAssetType; // @synthesize audioAssetType=_audioAssetType;
@property(readonly, nonatomic) NSArray *audioParts; // @synthesize audioParts=_audioParts;
@property(readonly, nonatomic) _Bool isTrending; // @synthesize isTrending=_isTrending;
@property(readonly, copy, nonatomic) NSString *videoCountString; // @synthesize videoCountString=_videoCountString;
@property(nonatomic) _Bool isBookmarked; // @synthesize isBookmarked=_isBookmarked;
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
@property(readonly, copy, nonatomic) NSString *artistDisplayName; // @synthesize artistDisplayName=_artistDisplayName;
@property(readonly, copy, nonatomic) IGUser *artist; // @synthesize artist=_artist;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *audioClusterId; // @synthesize audioClusterId=_audioClusterId;
@property(readonly, copy, nonatomic) NSString *audioAssetId; // @synthesize audioAssetId=_audioAssetId;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCreationUser:(id)arg1 audioTrack:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

