//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGSurveyFlow : NSObject
{
    NSString *_flowType;
    NSArray *_configuredQuestions;
    NSString *_initialControlNode;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *initialControlNode; // @synthesize initialControlNode=_initialControlNode;
@property(readonly, copy, nonatomic) NSArray *configuredQuestions; // @synthesize configuredQuestions=_configuredQuestions;
@property(readonly, copy, nonatomic) NSString *flowType; // @synthesize flowType=_flowType;
- (id)initWithFlowType:(id)arg1 configuredQuestions:(id)arg2 initialControlNode:(id)arg3;

@end

