//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IG4BLogger, IGBusinessConversionFacebookPageCategory, NSString;
@protocol IGProProfileDisplayOptionsViewControllerDelegate;

@interface IGProProfileDisplayOptionsUserIntentTarget : NSObject <FBIntentTarget>
{
    IGBusinessConversionFacebookPageCategory *_category;
    id <IGProProfileDisplayOptionsViewControllerDelegate> _delegate;
    IG4BLogger *_logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IG4BLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <IGProProfileDisplayOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGBusinessConversionFacebookPageCategory *category; // @synthesize category=_category;
- (id)initWithCategory:(id)arg1 delegate:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

