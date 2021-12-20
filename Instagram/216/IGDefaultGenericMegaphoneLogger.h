//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGGenericMegaphoneLogger-Protocol.h"

@class IGUserSession, NSString;

@interface IGDefaultGenericMegaphoneLogger : NSObject <IGGenericMegaphoneLogger>
{
    _Bool _seen;
    unsigned long long _displaySource;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool seen; // @synthesize seen=_seen;
@property(nonatomic) unsigned long long displaySource; // @synthesize displaySource=_displaySource;
- (void)logMegaphoneButtonTapped:(id)arg1 onButton:(id)arg2;
- (void)logMegaphoneDismissed:(id)arg1;
- (void)logMegaphoneWasSeen:(id)arg1;
- (void)_logForMegaphone:(id)arg1 action:(id)arg2 displaySourceString:(id)arg3 reason:(id)arg4;
- (id)getLogRequestBuilderWithMegaphoneType:(id)arg1 action:(id)arg2 displaySourceString:(id)arg3 reason:(id)arg4;
- (id)getLogRequestBuilder:(id)arg1 action:(id)arg2 displaySourceString:(id)arg3 reason:(id)arg4;
- (id)initWithUserSession:(id)arg1 displaySource:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
