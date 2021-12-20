//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAudioModelProtocol-Protocol.h>
#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGSearchableItem-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class IGAsyncTask, NSArray, NSString, NSURL;

@interface IGAudioMusicTrack : NSObject <IGSearchableItem, NSCopying, NSSecureCoding, IGListDiffable, IGAudioModelProtocol>
{
    IGAsyncTask *_audioFastStartAsset;
    _Bool _isExplicit;
    _Bool _isBookmarked;
    _Bool _hasLyrics;
    _Bool _allowsSaving;
    _Bool _shouldMuteAudio;
    _Bool _useOfAudioDisabled;
    NSString *_originalAudioAssetId;
    NSString *_canonicalId;
    NSString *_audioAssetId;
    NSString *_audioClusterId;
    NSString *_title;
    NSString *_artistName;
    NSURL *_albumArtURL;
    double _durationInSeconds;
    NSURL *_albumArtThumbnailURL;
    IGAsyncTask *_audioFileURL;
    NSURL *_audioFileFastStartURL;
    NSArray *_highlightTimesInSeconds;
    IGAsyncTask *_audioAsset;
    double _startTimeInComposition;
    NSString *_darkMessage;
    NSString *_shouldMuteAudioReason;
    IGAsyncTask *_beats;
    NSArray *_featuredIdentifiers;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithTrackDict:(id)arg1 metadataDict:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *featuredIdentifiers; // @synthesize featuredIdentifiers=_featuredIdentifiers;
@property(readonly, nonatomic) IGAsyncTask *beats; // @synthesize beats=_beats;
@property(readonly, nonatomic) _Bool useOfAudioDisabled; // @synthesize useOfAudioDisabled=_useOfAudioDisabled;
@property(readonly, copy, nonatomic) NSString *shouldMuteAudioReason; // @synthesize shouldMuteAudioReason=_shouldMuteAudioReason;
@property(readonly, nonatomic) _Bool shouldMuteAudio; // @synthesize shouldMuteAudio=_shouldMuteAudio;
@property(readonly, nonatomic) _Bool allowsSaving; // @synthesize allowsSaving=_allowsSaving;
@property(readonly, copy, nonatomic) NSString *darkMessage; // @synthesize darkMessage=_darkMessage;
@property(readonly, nonatomic) double startTimeInComposition; // @synthesize startTimeInComposition=_startTimeInComposition;
@property(readonly, nonatomic) _Bool hasLyrics; // @synthesize hasLyrics=_hasLyrics;
@property(readonly, nonatomic) IGAsyncTask *audioAsset; // @synthesize audioAsset=_audioAsset;
@property(nonatomic) _Bool isBookmarked; // @synthesize isBookmarked=_isBookmarked;
@property(readonly, nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(readonly, nonatomic) NSArray *highlightTimesInSeconds; // @synthesize highlightTimesInSeconds=_highlightTimesInSeconds;
@property(readonly, nonatomic) NSURL *audioFileFastStartURL; // @synthesize audioFileFastStartURL=_audioFileFastStartURL;
@property(readonly, nonatomic) IGAsyncTask *audioFileURL; // @synthesize audioFileURL=_audioFileURL;
@property(readonly, copy, nonatomic) NSURL *albumArtThumbnailURL; // @synthesize albumArtThumbnailURL=_albumArtThumbnailURL;
@property(readonly, nonatomic) double durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(readonly, copy, nonatomic) NSURL *albumArtURL; // @synthesize albumArtURL=_albumArtURL;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *audioClusterId; // @synthesize audioClusterId=_audioClusterId;
@property(readonly, copy, nonatomic) NSString *audioAssetId; // @synthesize audioAssetId=_audioAssetId;
@property(readonly, copy, nonatomic) NSString *canonicalId; // @synthesize canonicalId=_canonicalId;
@property(readonly, nonatomic) NSString *originalAudioAssetId; // @synthesize originalAudioAssetId=_originalAudioAssetId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, copy, nonatomic) NSString *pk;
@property(readonly, nonatomic) IGAsyncTask *audioFastStartAsset;
@property(readonly, nonatomic) long long audioType;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newWithBeats:(id)arg1;
- (id)initWithPk:(id)arg1 audioClusterId:(id)arg2 title:(id)arg3 artistName:(id)arg4 albumArtURL:(id)arg5 albumArtThumbnailURL:(id)arg6 audioFileURL:(id)arg7 audioFileFastStartURL:(id)arg8 highlightTimeInMilliseconds:(id)arg9 durationInMilliseconds:(long long)arg10 isExplicit:(_Bool)arg11 hasLyrics:(_Bool)arg12 darkMessage:(id)arg13 allowsSaving:(_Bool)arg14 isBookmarked:(_Bool)arg15;
- (id)searchableContent;
- (id)searchID;
@property(copy, nonatomic) NSString *searchSessionID;
@property(nonatomic) _Bool isPostcapture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

