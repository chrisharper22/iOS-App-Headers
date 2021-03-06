//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBMerlinImpressionManager;
@protocol IGCommentVPVDHelperDelegate;

@interface IGCommentMerlinLoggingHelper : NSObject
{
    FBMerlinImpressionManager *_merlinManager;
    id <IGCommentVPVDHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGCommentVPVDHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBMerlinImpressionManager *merlinManager; // @synthesize merlinManager=_merlinManager;
- (id)merlinVPVActionWithName:(id)arg1 key:(id)arg2 comment:(id)arg3 media:(id)arg4;
- (void)logCommentVPVDWithMerlin:(id)arg1 media:(id)arg2 viewpointState:(long long)arg3 percentVisible:(double)arg4 extras:(id)arg5;
- (id)initWithMerlinManager:(id)arg1 delegate:(id)arg2;
- (id)initWithMerlinManager:(id)arg1;

@end

