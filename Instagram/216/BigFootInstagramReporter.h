//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BigFootReporterBaseImpl.h"

@class BigFootInstagramSanitisation, IGUserSession;
@protocol FBAnalyticsLogging;

@interface BigFootInstagramReporter : BigFootReporterBaseImpl
{
    IGUserSession *_session;
    id <FBAnalyticsLogging> _logger;
    BigFootInstagramSanitisation *_sanitiser;
}

- (void).cxx_destruct;
- (void)reportData:(id)arg1;
- (id)dataProviders;
- (id)initWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 logger:(id)arg2;

@end
