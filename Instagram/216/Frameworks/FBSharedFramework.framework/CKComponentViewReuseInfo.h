//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView;

@interface CKComponentViewReuseInfo : NSObject
{
    UIView *_view;
    CDUnknownBlockType _didEnterReusePoolBlock;
    CDUnknownBlockType _willLeaveReusePoolBlock;
    NSMutableArray *_childViewInfos;
    _Bool _hidden;
    _Bool _ancestorHidden;
}

- (void).cxx_destruct;
- (void)ancestorWillUnhide;
- (void)ancestorDidHide;
- (void)willUnhide:(struct MountAnalyticsContext *)arg1;
- (void)didHide:(struct MountAnalyticsContext *)arg1;
- (void)registerChildViewInfo:(id)arg1;
- (id)initWithView:(id)arg1 didEnterReusePoolBlock:(CDUnknownBlockType)arg2 willLeaveReusePoolBlock:(CDUnknownBlockType)arg3;

@end
