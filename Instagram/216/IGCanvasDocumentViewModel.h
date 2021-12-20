//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGCanvasDocument, IGCanvasFooterViewModel, IGCanvasHeaderViewModel, IGCanvasSwipeUpViewModel, NSArray;

@interface IGCanvasDocumentViewModel : NSObject
{
    IGCanvasHeaderViewModel *_headerViewModel;
    IGCanvasFooterViewModel *_footerViewModel;
    IGCanvasSwipeUpViewModel *_swipeUpViewModel;
    _Bool _audioDetected;
    NSArray *_viewModels;
    IGCanvasDocument *_document;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool audioDetected; // @synthesize audioDetected=_audioDetected;
@property(readonly, nonatomic) IGCanvasDocument *document; // @synthesize document=_document;
@property(readonly, copy, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (id)_createViewModelsFromDocument:(id)arg1 module:(id)arg2;
- (id)swipeUpViewModel;
- (id)footerViewModel;
- (id)headerViewModel;
- (id)initWithDocument:(id)arg1 module:(id)arg2;

@end
