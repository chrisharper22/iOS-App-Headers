//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGSurveySessionConfig : NSObject
{
    _Bool _autoSubmitEnabled;
    _Bool _suppressIntro;
    long long _configID;
    NSString *_introText;
    NSString *_outroText;
    double _displayDelay;
    NSString *_lastPageSubmitButtonText;
    NSString *_surveyHeader;
    NSString *_thanksHeader;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *thanksHeader; // @synthesize thanksHeader=_thanksHeader;
@property(readonly, copy, nonatomic) NSString *surveyHeader; // @synthesize surveyHeader=_surveyHeader;
@property(readonly, copy, nonatomic) NSString *lastPageSubmitButtonText; // @synthesize lastPageSubmitButtonText=_lastPageSubmitButtonText;
@property(readonly, nonatomic) _Bool suppressIntro; // @synthesize suppressIntro=_suppressIntro;
@property(readonly, nonatomic) _Bool autoSubmitEnabled; // @synthesize autoSubmitEnabled=_autoSubmitEnabled;
@property(readonly, nonatomic) double displayDelay; // @synthesize displayDelay=_displayDelay;
@property(readonly, copy, nonatomic) NSString *outroText; // @synthesize outroText=_outroText;
@property(readonly, copy, nonatomic) NSString *introText; // @synthesize introText=_introText;
@property(readonly, nonatomic) long long configID; // @synthesize configID=_configID;
- (id)initWithSurveySession:(long long)arg1 introText:(id)arg2 outroText:(id)arg3 displayDelay:(double)arg4 autoSubmitEnabled:(_Bool)arg5 suppressIntro:(_Bool)arg6 lastPageSubmitButtonText:(id)arg7 surveyHeader:(id)arg8 thanksHeader:(id)arg9;

@end

