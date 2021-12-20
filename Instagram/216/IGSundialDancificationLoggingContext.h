//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGSundialDancificationLoggingContext : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _logger;
    IGUserSession *_userSession;
    NSString *_sessionID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)_cancelInFlightPerformanceLogging;
- (void)logTapBack;
- (void)logTapNext;
- (void)logTapStyles;
- (void)logTapSkip;
- (void)logGalleryButtonUntap;
- (void)logGalleryButtonTap;
- (void)logTapAudioSearch;
- (void)logTapAudioWithTrackID:(id)arg1;
- (void)logMontageRenderCancel;
- (void)logMontageRenderEnd;
- (void)logMontageRenderStart;
- (void)logTimeToFirstFrameCancel;
- (void)logTimeToFirstFrameEnd;
- (void)logTimeToFirstFrameStart;
- (void)logPreprocessTranscodeError;
- (void)logPreprocessTranscodeEnd;
- (void)logPreprocessTranscodeStart;
- (void)logFileExportEnd;
- (void)logFileExportStart;
- (void)logAudioBeatDetectionEnd;
- (void)logAudioBeatDetectionStart;
- (void)logVisualBeatDetectionEnd;
- (void)logVisualBeatDetectionStartWithInputDuration:(double)arg1;
- (void)logVideoTrimmed;
- (id)initWithUserSession:(id)arg1 sessionID:(id)arg2;

@end

