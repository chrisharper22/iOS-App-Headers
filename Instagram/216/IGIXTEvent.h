//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol NSObject;

@interface IGIXTEvent : NSObject
{
    NSString *_eventID;
    NSString *_appID;
    id <NSObject> _clientContext;
    NSDictionary *_eventParams;
    NSString *_analyticsModule;
    NSString *_firstScreenId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *firstScreenId; // @synthesize firstScreenId=_firstScreenId;
@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) NSDictionary *eventParams; // @synthesize eventParams=_eventParams;
@property(readonly, nonatomic) id <NSObject> clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (id)initWithAppID:(id)arg1 eventParams:(id)arg2 clientContext:(id)arg3 analyticsModule:(id)arg4 extras:(struct IGIXTEventExtras)arg5;

@end

