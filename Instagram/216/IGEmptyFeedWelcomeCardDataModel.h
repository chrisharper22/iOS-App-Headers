//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSString;

@interface IGEmptyFeedWelcomeCardDataModel : NSObject <IGListDiffable>
{
    NSString *_diffIdentifier;
    _Bool _shouldTakeFullContainer;
    NSString *_title;
    NSString *_subTitle;
    NSString *_buttonText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldTakeFullContainer; // @synthesize shouldTakeFullContainer=_shouldTakeFullContainer;
@property(readonly, copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 buttonText:(id)arg3;

@end
