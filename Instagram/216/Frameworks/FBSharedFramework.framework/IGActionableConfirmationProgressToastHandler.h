//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IGActionableConfirmationProgressToastHandlerDelegate;

@interface IGActionableConfirmationProgressToastHandler : NSObject
{
    NSString *_identifier;
    id <IGActionableConfirmationProgressToastHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGActionableConfirmationProgressToastHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)progressDidFailWithRetryHandler:(CDUnknownBlockType)arg1;
- (void)progressDidSucceed;
- (void)updateProgress:(double)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

