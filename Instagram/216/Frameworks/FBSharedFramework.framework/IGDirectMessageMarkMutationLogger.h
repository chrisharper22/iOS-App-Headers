//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectMutationRequestLogging-Protocol.h>

@class IGDirectMessageMark, NSString;
@protocol IGAnalyticsEventLoggingProtocol;

@interface IGDirectMessageMarkMutationLogger : NSObject <IGDirectMutationRequestLogging>
{
    IGDirectMessageMark *_messageMark;
    id <IGAnalyticsEventLoggingProtocol> _logger;
}

- (void).cxx_destruct;
- (void)logEvent:(id)arg1;
- (id)initWithMessageMark:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
