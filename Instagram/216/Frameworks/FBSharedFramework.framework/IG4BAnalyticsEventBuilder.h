//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface IG4BAnalyticsEventBuilder : NSObject
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

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSNumber *hasFetchedAll; // @synthesize hasFetchedAll=_hasFetchedAll;
@property(copy, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(copy, nonatomic) NSString *facebookPageID; // @synthesize facebookPageID=_facebookPageID;
@property(copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *consumerUserID; // @synthesize consumerUserID=_consumerUserID;
@property(copy, nonatomic) NSString *errorIndentifier; // @synthesize errorIndentifier=_errorIndentifier;
@property(copy, nonatomic) NSString *step; // @synthesize step=_step;
@property(copy, nonatomic) NSDictionary *selectedValues; // @synthesize selectedValues=_selectedValues;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) NSDictionary *defaultValues; // @synthesize defaultValues=_defaultValues;
@property(copy, nonatomic) NSDictionary *configurations; // @synthesize configurations=_configurations;
@property(copy, nonatomic) NSString *component; // @synthesize component=_component;
@property(copy, nonatomic) NSNumber *availableOptionsCount; // @synthesize availableOptionsCount=_availableOptionsCount;
@property(copy, nonatomic) NSArray *availableOptions; // @synthesize availableOptions=_availableOptions;
- (id)build;

@end
