//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGNotificationSurveyQuestion : NSObject
{
    NSString *_moduleType;
    NSString *_questionID;
    NSString *_title;
    NSString *_type;
    NSArray *_answers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *answers; // @synthesize answers=_answers;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *questionID; // @synthesize questionID=_questionID;
@property(readonly, nonatomic) NSString *moduleType; // @synthesize moduleType=_moduleType;
- (id)initWithModuleType:(id)arg1 questionID:(id)arg2 title:(id)arg3 type:(id)arg4 answers:(id)arg5;

@end
