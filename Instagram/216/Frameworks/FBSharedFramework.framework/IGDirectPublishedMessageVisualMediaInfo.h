//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGCreativeConfig, IGDirectPublishedMessageVisualMedia, IGDirectVisualMessageActionSummary, IGStoryAttributionModel, NSArray, NSDate, NSOrderedSet, NSString;

@interface IGDirectPublishedMessageVisualMediaInfo : FBValueObject <NSCopying, NSCoding>
{
    _Bool _hasTranscription;
    _Bool _isMoment;
    NSString *_mediaId;
    IGDirectPublishedMessageVisualMedia *_media;
    long long _viewMode;
    NSArray *_textLabelCaptions;
    double _playbackDuration;
    NSDate *_mediaUrlGoesStaleDate;
    IGDirectVisualMessageActionSummary *_actionSummary;
    long long _seenCountForCurrentUser;
    NSOrderedSet *_viewers;
    long long _replyType;
    NSString *_organicTrackingToken;
    NSDate *_archivedMediaDate;
    IGStoryAttributionModel *_attributionModel;
    NSArray *_tapModels;
    IGCreativeConfig *_creativeConfig;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMoment; // @synthesize isMoment=_isMoment;
@property(readonly, nonatomic) _Bool hasTranscription; // @synthesize hasTranscription=_hasTranscription;
@property(readonly, copy, nonatomic) IGCreativeConfig *creativeConfig; // @synthesize creativeConfig=_creativeConfig;
@property(readonly, copy, nonatomic) NSArray *tapModels; // @synthesize tapModels=_tapModels;
@property(readonly, copy, nonatomic) IGStoryAttributionModel *attributionModel; // @synthesize attributionModel=_attributionModel;
@property(readonly, copy, nonatomic) NSDate *archivedMediaDate; // @synthesize archivedMediaDate=_archivedMediaDate;
@property(readonly, copy, nonatomic) NSString *organicTrackingToken; // @synthesize organicTrackingToken=_organicTrackingToken;
@property(readonly, nonatomic) long long replyType; // @synthesize replyType=_replyType;
@property(readonly, copy, nonatomic) NSOrderedSet *viewers; // @synthesize viewers=_viewers;
@property(readonly, nonatomic) long long seenCountForCurrentUser; // @synthesize seenCountForCurrentUser=_seenCountForCurrentUser;
@property(readonly, copy, nonatomic) IGDirectVisualMessageActionSummary *actionSummary; // @synthesize actionSummary=_actionSummary;
@property(readonly, copy, nonatomic) NSDate *mediaUrlGoesStaleDate; // @synthesize mediaUrlGoesStaleDate=_mediaUrlGoesStaleDate;
@property(readonly, nonatomic) double playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(readonly, copy, nonatomic) NSArray *textLabelCaptions; // @synthesize textLabelCaptions=_textLabelCaptions;
@property(readonly, nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
@property(readonly, copy, nonatomic) IGDirectPublishedMessageVisualMedia *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMediaId:(id)arg1 media:(id)arg2 viewMode:(long long)arg3 textLabelCaptions:(id)arg4 playbackDuration:(double)arg5 mediaUrlGoesStaleDate:(id)arg6 actionSummary:(id)arg7 seenCountForCurrentUser:(long long)arg8 viewers:(id)arg9 replyType:(long long)arg10 organicTrackingToken:(id)arg11 archivedMediaDate:(id)arg12 attributionModel:(id)arg13 tapModels:(id)arg14 creativeConfig:(id)arg15 hasTranscription:(_Bool)arg16 isMoment:(_Bool)arg17;
- (id)initWithCoder:(id)arg1;

@end

