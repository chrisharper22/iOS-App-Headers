//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, NSMutableSet;
@protocol IGDiscoveryMapSavedLocationHydrationControllerDelegate;

@interface IGDiscoveryMapSavedLocationHydrationController : NSObject
{
    NSArray *_locationIDs;
    NSMutableOrderedSet *_pagesToFetchStack;
    NSMutableSet *_inFlightHydrationLocationPages;
    NSMutableSet *_completedHydrationLocationPages;
    id <IGDiscoveryMapSavedLocationHydrationControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDiscoveryMapSavedLocationHydrationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_fetchNextPageInStackIfNeeded;
- (void)markLocationIDAsSeen:(id)arg1;
- (void)markLocationIDsAsHydrating:(id)arg1;
- (void)markHydrationRequestFinished;
- (id)initWithLocationIDs:(id)arg1;

@end
