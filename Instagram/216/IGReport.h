//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGIXTEvent, IGReportLogger, IGUserSession, NSString;
@protocol IGReportable;

@interface IGReport : NSObject
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGIXTEvent *_event;
    CDUnknownBlockType _onComplete;
    IGReportLogger *_logger;
    id <IGReportable> _target;
    unsigned long long _objectType;
    unsigned long long _ixtLocation;
    unsigned long long _ixtElement;
    NSString *_loggingExtrasJSON;
    _Bool _isInHoldout;
    struct IGReportingExtras _extras;
    _Bool _attemptedToPreload;
    _Bool _clientSideFRXStartFlowEnabled;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)preloadSubmissionFlow;
- (void)presentSubmissionFlow;
- (id)logger;
- (id)event;
- (id)initWithUserSession:(id)arg1 target:(id)arg2 location:(unsigned long long)arg3 analyticsModule:(id)arg4 extras:(struct IGReportingExtras)arg5;

@end
