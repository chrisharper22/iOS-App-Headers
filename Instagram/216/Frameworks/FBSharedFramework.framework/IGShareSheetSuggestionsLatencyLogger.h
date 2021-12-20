//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGShareSheetSuggestionsLatencyLogger : NSObject
{
    _Bool _textSuggestionsShownToUser;
    NSDate *_shareSheetSuggestionsRequestStarted;
    NSString *_mnetSessionId;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)_resetLoggerState;
- (void)_logShareSheetSuggestionsLatency:(double)arg1 didTimeout:(_Bool)arg2 analyticsModule:(id)arg3;
- (void)networkRequestFinishedWithAnalyticsModule:(id)arg1 didTimeout:(_Bool)arg2;
- (void)networkRequestStarted;
- (void)setTextSuggestionsNotShownToUser;
- (void)setMnetSessionId:(id)arg1;
- (void)resetLoggerState;
- (id)initWithAnalyticsLogger:(id)arg1;

@end

