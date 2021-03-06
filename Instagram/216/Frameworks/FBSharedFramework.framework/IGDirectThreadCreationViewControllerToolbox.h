//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectRecipientListAnalyticsOmnipickerUnifiedLogger, IGDirectThreadCreationTokenFieldController, IGPresenceManager, IGUserSession, NSString;

@interface IGDirectThreadCreationViewControllerToolbox : NSObject
{
    IGUserSession *_userSession;
    IGDirectThreadCreationTokenFieldController *_tokenFieldController;
    IGPresenceManager *_presenceManager;
    NSString *_analyticsModule;
    IGDirectRecipientListAnalyticsOmnipickerUnifiedLogger *_recipientListAnalyticsLogger;
    unsigned long long _entryPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) IGDirectRecipientListAnalyticsOmnipickerUnifiedLogger *recipientListAnalyticsLogger; // @synthesize recipientListAnalyticsLogger=_recipientListAnalyticsLogger;
@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGPresenceManager *presenceManager; // @synthesize presenceManager=_presenceManager;
@property(readonly, nonatomic) IGDirectThreadCreationTokenFieldController *tokenFieldController; // @synthesize tokenFieldController=_tokenFieldController;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)initWithUserSession:(id)arg1 tokenFieldController:(id)arg2 presenceManager:(id)arg3 analyticsModule:(id)arg4 recipientListAnalyticsLogger:(id)arg5 entryPoint:(unsigned long long)arg6;

@end

