//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSNumber;

@interface IGDirectPendingInboxSortTypeUpdate : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSNumber *_ranked_numberOfDaysAvailable;
}

+ (id)rankedWithNumberOfDaysAvailable:(id)arg1;
+ (id)mostRecent;
- (void).cxx_destruct;
- (void)matchMostRecent:(CDUnknownBlockType)arg1 ranked:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanMostRecent:(CDUnknownBlockType)arg1 ranked:(CDUnknownBlockType)arg2;

@end
