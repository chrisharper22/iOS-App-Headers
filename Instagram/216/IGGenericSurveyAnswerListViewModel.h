//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIColor;

@interface IGGenericSurveyAnswerListViewModel : NSObject
{
    unsigned long long _answerType;
    NSArray *_answers;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) NSArray *answers; // @synthesize answers=_answers;
@property(readonly, nonatomic) unsigned long long answerType; // @synthesize answerType=_answerType;
- (id)initWithAnswerType:(unsigned long long)arg1 answers:(id)arg2 backgroundColor:(id)arg3;

@end

