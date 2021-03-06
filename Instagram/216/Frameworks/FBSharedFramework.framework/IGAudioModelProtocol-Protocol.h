//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGMusicBookmarkableStoriesAudioProtocol-Protocol.h>

@class IGAsyncTask, NSArray, NSString, NSURL;

@protocol IGAudioModelProtocol <IGMusicBookmarkableStoriesAudioProtocol>
@property(readonly, nonatomic) IGAsyncTask *audioFastStartAsset;
@property(readonly, nonatomic) NSURL *audioFileFastStartURL;
@property(readonly, nonatomic) IGAsyncTask *audioAsset;
@property(readonly, nonatomic) IGAsyncTask *audioFileURL;
@property(readonly, nonatomic) double startTimeInComposition;
@property(readonly, nonatomic) _Bool hasLyrics;
@property(readonly, nonatomic) _Bool isExplicit;
@property(readonly, nonatomic) NSArray *highlightTimesInSeconds;
@property(readonly, nonatomic) double durationInSeconds;
@property(readonly, copy, nonatomic) NSURL *albumArtThumbnailURL;
@property(readonly, copy, nonatomic) NSURL *albumArtURL;
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) long long audioType;
@property(readonly, copy, nonatomic) NSString *audioAssetId;
@property(readonly, copy, nonatomic) NSString *canonicalId;
@end

