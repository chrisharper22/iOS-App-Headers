//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSMutableSet, NSString;

@interface IGLocationMainFeedLogger : NSObject
{
    NSString *_module;
    NSMutableSet *_loggedItemIds;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)logHeaderImpressionForLocation:(id)arg1;
- (void)logImpressionForLocation:(id)arg1 media:(id)arg2 locationType:(long long)arg3 gridPosition:(CDStruct_a508bfa1)arg4;
- (void)logClickForLocation:(id)arg1 media:(id)arg2 locationType:(long long)arg3 gridPosition:(CDStruct_a508bfa1)arg4;
- (id)initWithModule:(id)arg1 userSession:(id)arg2;

@end

