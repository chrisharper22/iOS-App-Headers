//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGSurveyQuestion : NSObject
{
    _Bool _showPrimerView;
    long long _answerStyle;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_possibleAnswers;
    NSString *_surveyID;
    NSString *_trackingToken;
    NSString *_headerText;
}

+ (id)mockSurveyJSON;
+ (id)questionForServerMessage:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool showPrimerView; // @synthesize showPrimerView=_showPrimerView;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) NSString *trackingToken; // @synthesize trackingToken=_trackingToken;
@property(retain, nonatomic) NSString *surveyID; // @synthesize surveyID=_surveyID;
@property(retain, nonatomic) NSArray *possibleAnswers; // @synthesize possibleAnswers=_possibleAnswers;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long answerStyle; // @synthesize answerStyle=_answerStyle;

@end

