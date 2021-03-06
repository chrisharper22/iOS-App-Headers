//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSDate, NSDictionary;
@protocol IGSearchableItem;

@interface IGSearchSatisfactionSurveyManager : NSObject
{
    IGUserSession *_userSession;
    id <IGSearchableItem> _searchItemClickedOn;
    NSDate *_timeClickedOnSearchItem;
    NSDictionary *_contextData;
}

- (void).cxx_destruct;
- (void)_clearData;
- (void)markReturnToSearchAndTriggerSurveyIfNecessary;
- (void)markClickOnSearchableItem:(id)arg1 searchSessionID:(id)arg2 searchText:(id)arg3;
- (id)initWithUserSession:(id)arg1;

@end

