//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface IG4BAnalyticsEvent : NSObject
{
    NSArray *_availableOptions;
    NSNumber *_availableOptionsCount;
    NSString *_component;
    NSDictionary *_configurations;
    NSDictionary *_defaultValues;
    NSString *_errorMessage;
    NSString *_event;
    NSDictionary *_selectedValues;
    NSString *_step;
    NSString *_errorIndentifier;
    NSString *_consumerUserID;
    NSString *_action;
    NSString *_locationID;
    NSString *_facebookPageID;
    NSString *_mediaID;
    NSNumber *_position;
    NSNumber *_hasFetchedAll;
    NSDictionary *_extraData;
}

+ (id)config:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(readonly, copy, nonatomic) NSNumber *hasFetchedAll; // @synthesize hasFetchedAll=_hasFetchedAll;
@property(readonly, copy, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, copy, nonatomic) NSString *facebookPageID; // @synthesize facebookPageID=_facebookPageID;
@property(readonly, copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *consumerUserID; // @synthesize consumerUserID=_consumerUserID;
@property(readonly, copy, nonatomic) NSString *errorIndentifier; // @synthesize errorIndentifier=_errorIndentifier;
@property(readonly, copy, nonatomic) NSString *step; // @synthesize step=_step;
@property(readonly, copy, nonatomic) NSDictionary *selectedValues; // @synthesize selectedValues=_selectedValues;
@property(readonly, copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, copy, nonatomic) NSDictionary *defaultValues; // @synthesize defaultValues=_defaultValues;
@property(readonly, copy, nonatomic) NSDictionary *configurations; // @synthesize configurations=_configurations;
@property(readonly, copy, nonatomic) NSString *component; // @synthesize component=_component;
@property(readonly, copy, nonatomic) NSNumber *availableOptionsCount; // @synthesize availableOptionsCount=_availableOptionsCount;
@property(readonly, copy, nonatomic) NSArray *availableOptions; // @synthesize availableOptions=_availableOptions;
- (id)_initWithBuilder:(id)arg1;

@end

