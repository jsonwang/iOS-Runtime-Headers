/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIToolbar : UIView <UIBarPositioning, _UIBarPositioningInternal, _UIShadowedView> {
    BOOL  __wantsLetterpressContent;
    id  _appearanceStorage;
    _UIBarBackground * _barBackgroundView;
    int  _barPosition;
    UIColor * _barTintColor;
    BOOL  _centerTextButtons;
    UIView * _customBackgroundView;
    <UIToolbarDelegate> * _delegate;
    float  _extraEdgeInsets;
    NSArray * _items;
    UIView * _shadowView;
    struct { 
        unsigned int barStyle : 3; 
        unsigned int barTranslucence : 3; 
        unsigned int isLocked : 1; 
        unsigned int linkedBeforeWhitetailAndInitializedFromCoder : 1; 
    }  _toolbarFlags;
}

@property (getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:, nonatomic, retain) NSString *_backdropViewLayerGroupName;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (setter=_setHidesShadow:, nonatomic) BOOL _hidesShadow;
@property (getter=_isLocked, setter=_setLocked:, nonatomic) BOOL _locked;
@property (setter=_setShadowView:, nonatomic, retain) UIView *_shadowView;
@property (setter=_setWantsLetterpressContent:, nonatomic) BOOL _wantsLetterpressContent;
@property (nonatomic, readonly) int barPosition;
@property (nonatomic) int barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) BOOL centerTextButtons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIToolbarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *items;
@property (getter=isMinibar, nonatomic, readonly) BOOL minibar;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isTranslucent, nonatomic) BOOL translucent;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (Class)defaultButtonClass;
+ (id)defaultButtonFont;
+ (float)defaultHeight;
+ (float)defaultHeightForBarSize:(int)arg1;
+ (float)defaultSelectionModeHeight;
+ (Class)defaultTextButtonClass;

- (void).cxx_destruct;
- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (id)_backdropViewLayerGroupName;
- (id)_backgroundView;
- (int)_barPosition;
- (void)_buttonBarFinishedAnimating;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (float)_edgeMarginForBorderedItem:(BOOL)arg1 isText:(BOOL)arg2;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameOfBarButtonItem:(id)arg1;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(BOOL)arg1 wasMinibar:(BOOL)arg2;
- (void)_frameOrCenterChanged;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (BOOL)_hidesShadow;
- (BOOL)_isAdaptiveToolbarDisabled;
- (BOOL)_isInNavigationBar;
- (BOOL)_isLocked;
- (BOOL)_isTopBar_legacy;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3 actuallyRepositionButtons:(BOOL)arg4;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setAdaptiveToolbarDisabled:(BOOL)arg1;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarPosition:(int)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setForceTopBarAppearance:(BOOL)arg1;
- (void)_setHidesShadow:(BOOL)arg1;
- (void)_setLocked:(BOOL)arg1;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_setShadowView:(id)arg1;
- (void)_setVisualAltitude:(float)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { float x1; float x2; })arg1;
- (void)_setWantsLetterpressContent:(BOOL)arg1;
- (id)_shadowView;
- (BOOL)_subclassImplementsDrawRect;
- (void)_updateBackgroundView;
- (void)_updateBarForStyle;
- (void)_updateItemsForNewFrame:(id)arg1;
- (void)_updateOpacity;
- (BOOL)_wantsLetterpressContent;
- (void)addConstraint:(id)arg1;
- (void)animateToolbarItemIndex:(unsigned int)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (void)animateWithDuration:(float)arg1 forButton:(int)arg2;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(int)arg2;
- (id)backgroundImageForToolbarPosition:(int)arg1 barMetrics:(int)arg2;
- (int)barPosition;
- (int)barStyle;
- (id)barTintColor;
- (id)buttonItems;
- (BOOL)centerTextButtons;
- (id)createButtonWithDescription:(id)arg1;
- (int)currentButtonGroup;
- (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(int)arg1;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)extraEdgeInsets;
- (void)getVisibleButtonTags:(int*)arg1 count:(unsigned int*)arg2 maxItems:(unsigned int)arg3;
- (id)initInView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withItemList:(id)arg3;
- (id)initInView:(id)arg1 withItemList:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isMinibar;
- (BOOL)isTranslucent;
- (id)items;
- (void)layoutSubviews;
- (int)mode;
- (BOOL)onStateForButton:(int)arg1;
- (void)positionButtons:(id)arg1 tags:(int*)arg2 count:(int)arg3 group:(int)arg4;
- (void)registerButtonGroup:(int)arg1 withButtons:(int*)arg2 withCount:(int)arg3;
- (void)removeConstraint:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(int)arg2 barMetrics:(int)arg3;
- (void)setBadgeAnimated:(BOOL)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setBarStyle:(int)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setButtonBarTrackingMode:(int)arg1;
- (void)setButtonItems:(id)arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCenterTextButtons:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtraEdgeInsets:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setMode:(int)arg1;
- (void)setOnStateForButton:(BOOL)arg1 forButton:(int)arg2;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(int)arg2;
- (void)setTintColor:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (id)shadowImageForToolbarPosition:(int)arg1;
- (void)showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)showButtons:(int*)arg1 withCount:(int)arg2 withDuration:(double)arg3;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (id)configuration;
- (void)configureTransparent;
- (void)configureWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_doneButtonToolbarWithWidth:(float)arg1 target:(id)arg2 action:(SEL)arg3;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
