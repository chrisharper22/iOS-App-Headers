//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBPayAuthenticationPayPalContent : NSObject
{
    NSString *_navigationHeaderTitle;
    NSString *_screenTitle;
    NSString *_screenDescription;
    NSString *_terms;
    NSString *_actionButtonText;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionButtonText; // @synthesize actionButtonText=_actionButtonText;
@property(readonly, copy, nonatomic) NSString *terms; // @synthesize terms=_terms;
@property(readonly, copy, nonatomic) NSString *screenDescription; // @synthesize screenDescription=_screenDescription;
@property(readonly, copy, nonatomic) NSString *screenTitle; // @synthesize screenTitle=_screenTitle;
@property(readonly, copy, nonatomic) NSString *navigationHeaderTitle; // @synthesize navigationHeaderTitle=_navigationHeaderTitle;
- (id)initWithNavigationHeaderTitle:(id)arg1 screenTitle:(id)arg2 screenDescription:(id)arg3 terms:(id)arg4 actionButtonText:(id)arg5;

@end
