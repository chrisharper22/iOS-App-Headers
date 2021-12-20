//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSNumber, NSString;

@interface IGGuideCreationLogger : NSObject
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    unsigned long long _entryPoint;
    NSString *_existingGuidePk;
    double _entryTime;
    NSNumber *_selectedGuideType;
    long long _itemsAdded;
    long long _itemsRemoved;
    _Bool _itemsReordered;
    _Bool _hadPublishError;
    _Bool _didShareToFeed;
}

- (void).cxx_destruct;
- (void)logCreationSessionSummaryWithExitPoint:(long long)arg1 publishType:(long long)arg2;
- (void)notifyGuideCreatedWithPk:(id)arg1;
- (void)notifyDidShareToFeed:(_Bool)arg1;
- (void)notifyPublishError;
- (void)notifyItemsReordered;
- (void)notifyItemRemoved;
- (void)notifyItemsAddedWithCount:(long long)arg1;
- (void)notifyGuideTypeSelected:(long long)arg1;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 entryPoint:(unsigned long long)arg3 existingGuidePk:(id)arg4;

@end
