//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSDictionary, NSString;

@interface IGRapidFeedbackControllerConfig : NSObject
{
    IGUserSession *_userSession;
    NSString *_integrationPointID;
    NSDictionary *_contextData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *contextData; // @synthesize contextData=_contextData;
@property(readonly, nonatomic) NSString *integrationPointID; // @synthesize integrationPointID=_integrationPointID;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)initWithUserSession:(id)arg1 integrationPointID:(id)arg2 contextData:(id)arg3;

@end

