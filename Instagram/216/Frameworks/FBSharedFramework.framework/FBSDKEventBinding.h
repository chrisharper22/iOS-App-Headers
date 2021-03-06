//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol FBSDKEventLogging;

@interface FBSDKEventBinding : NSObject
{
    NSString *_eventName;
    NSString *_eventType;
    NSString *_appVersion;
    NSArray *_path;
    NSString *_pathType;
    NSArray *_parameters;
    id <FBSDKEventLogging> _eventLogger;
}

+ (id)findParameterOfPath:(id)arg1 pathType:(id)arg2 sourceView:(id)arg3;
+ (id)findViewByPath:(id)arg1 parent:(id)arg2 level:(int)arg3;
+ (_Bool)isPath:(id)arg1 matchViewPath:(id)arg2;
+ (_Bool)match:(id)arg1 pathComponent:(id)arg2;
+ (_Bool)matchAnyView:(id)arg1 pathComponent:(id)arg2;
+ (void)initialize;
+ (void)setNumberParser:(id)arg1;
+ (id)numberParser;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FBSDKEventLogging> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *pathType; // @synthesize pathType=_pathType;
@property(readonly, nonatomic) NSArray *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (_Bool)isEqualToBinding:(id)arg1;
- (void)trackEvent:(id)arg1;
- (id)initWithJSON:(id)arg1 eventLogger:(id)arg2;

@end

