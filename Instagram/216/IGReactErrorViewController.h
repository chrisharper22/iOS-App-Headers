//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGGestureHandler-Protocol.h"

@class IGReactErrorView, NSString;

@interface IGReactErrorViewController : IGViewController <IGGestureHandler>
{
    IGReactErrorView *_errorView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGReactErrorView *errorView; // @synthesize errorView=_errorView;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLoad;
- (id)initWithErrorMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
