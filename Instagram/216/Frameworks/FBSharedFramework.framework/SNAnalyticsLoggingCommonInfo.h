//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SNAnalyticsLoggingCommonInfo : NSObject
{
    NSString *_templateName;
    NSString *_placement;
    NSString *_content;
    NSString *_sessionId;
    NSString *_clientName;
    NSDictionary *_loggingInfo;
    NSDictionary *_customLoggingInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *customLoggingInfo; // @synthesize customLoggingInfo=_customLoggingInfo;
@property(readonly, nonatomic) NSDictionary *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSString *placement; // @synthesize placement=_placement;
@property(readonly, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (id)initWithTemplateName:(id)arg1 placement:(id)arg2 content:(id)arg3 sessionId:(id)arg4 clientName:(id)arg5 loggingInfo:(id)arg6 customLoggingInfo:(id)arg7;

@end
