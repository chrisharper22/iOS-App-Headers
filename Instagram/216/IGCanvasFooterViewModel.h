//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGCanvasButton, IGCanvasButtonViewModel, IGCanvasElementContext;

@interface IGCanvasFooterViewModel : NSObject <IGListDiffable>
{
    IGCanvasElementContext *_context;
    IGCanvasButton *_button;
    IGCanvasButtonViewModel *_buttonViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCanvasButtonViewModel *buttonViewModel; // @synthesize buttonViewModel=_buttonViewModel;
@property(readonly, nonatomic) IGCanvasButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) IGCanvasElementContext *context; // @synthesize context=_context;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithButtonViewModel:(id)arg1 context:(id)arg2 button:(id)arg3;

@end

