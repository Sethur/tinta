#include "app.h"

// 7 Themes - 3 Light, 4 Dark
const D2DTheme THEMES[] = {
    // ═══════════════════════════════════════════════════════════
    // LIGHT THEMES
    // ═══════════════════════════════════════════════════════════

    // 1. GitHub Light - Clean and familiar
    {
        L"GitHub Light", L"Segoe UI", L"Consolas", false,
        hexColor(0xFFFFFF),    // background - white
        hexColor(0x1F2328),    // text - near black
        hexColor(0x1F2328),    // heading - same as text
        hexColor(0x0969DA),    // link - blue
        hexColor(0x1F2328),    // code - near black
        hexColor(0xF6F8FA),    // codeBackground - light gray
        hexColor(0xD1D9E0),    // blockquoteBorder
        hexColor(0x0969DA),    // accent - blue
        // Syntax colors (GitHub Light)
        hexColor(0xCF222E),    // syntaxKeyword - red
        hexColor(0x0A3069),    // syntaxString - deep blue
        hexColor(0x59636E),    // syntaxComment - gray
        hexColor(0x0550AE),    // syntaxNumber - blue
        hexColor(0x6639BA),    // syntaxFunction - purple
        hexColor(0x0550AE),    // syntaxType - blue
        hexColor(0xCF222E),    // syntaxControlFlow - red
        hexColor(0x6639BA),    // syntaxDecorator - purple
        hexColor(0x0550AE),    // syntaxConstant - blue
        hexColor(0x1A7F37),    // syntaxDiffAdd - green
        hexColor(0xCF222E),    // syntaxDiffRemove - red
        hexColor(0x6E7781)     // syntaxDiffHeader - gray
    },

    // 2. One Light - Atom One Light
    {
        L"One Light", L"Segoe UI", L"Consolas", false,
        hexColor(0xFAFAFA),    // background
        hexColor(0x383A42),    // text
        hexColor(0x383A42),    // heading
        hexColor(0x4078F2),    // link - blue
        hexColor(0x383A42),    // code
        hexColor(0xF0F0F0),    // codeBackground
        hexColor(0xDFDFE0),    // blockquoteBorder
        hexColor(0x4078F2),    // accent - blue
        // Syntax colors (One Light)
        hexColor(0xA626A4),    // syntaxKeyword - purple
        hexColor(0x50A14F),    // syntaxString - green
        hexColor(0xA0A1A7),    // syntaxComment - gray
        hexColor(0xD75F00),    // syntaxNumber - orange
        hexColor(0x4078F2),    // syntaxFunction - blue
        hexColor(0xC18401),    // syntaxType - yellow
        hexColor(0xA626A4),    // syntaxControlFlow - purple
        hexColor(0xA626A4),    // syntaxDecorator - purple
        hexColor(0xC18401),    // syntaxConstant - yellow/gold
        hexColor(0x50A14F),    // syntaxDiffAdd - green
        hexColor(0xE45649),    // syntaxDiffRemove - red
        hexColor(0xA0A1A7)     // syntaxDiffHeader - gray
    },

    // 3. Ayu Light
    {
        L"Ayu Light", L"Segoe UI", L"Consolas", false,
        hexColor(0xFAFAFA),    // background
        hexColor(0x5C6166),    // text
        hexColor(0x5C6166),    // heading
        hexColor(0x399EE6),    // link - blue
        hexColor(0x5C6166),    // code
        hexColor(0xF0F0F0),    // codeBackground
        hexColor(0xDFDFDF),    // blockquoteBorder
        hexColor(0x399EE6),    // accent - blue
        // Syntax colors (Ayu Light)
        hexColor(0xFA8D3E),    // syntaxKeyword - orange
        hexColor(0x86B300),    // syntaxString - green
        hexColor(0xA0A0A0),    // syntaxComment - gray
        hexColor(0xA37ACC),    // syntaxNumber - purple
        hexColor(0x55B4D4),    // syntaxFunction - cyan
        hexColor(0x399EE6),    // syntaxType - blue
        hexColor(0xFA8D3E),    // syntaxControlFlow - orange
        hexColor(0xE6BA7E),    // syntaxDecorator - amber
        hexColor(0xA37ACC),    // syntaxConstant - purple
        hexColor(0x6CBF43),    // syntaxDiffAdd - green
        hexColor(0xF07171),    // syntaxDiffRemove - red
        hexColor(0xA0A0A0)     // syntaxDiffHeader - gray
    },

    // ═══════════════════════════════════════════════════════════
    // DARK THEMES
    // ═══════════════════════════════════════════════════════════

    // 4. GitHub Dark
    {
        L"GitHub Dark", L"Segoe UI", L"Consolas", true,
        hexColor(0x0D1117),    // background - dark blue-gray
        hexColor(0xF0F6FC),    // text - soft white
        hexColor(0xF0F6FC),    // heading - same as text
        hexColor(0x4493F8),    // link - bright blue
        hexColor(0xF0F6FC),    // code - soft white
        hexColor(0x151B23),    // codeBackground - darker
        hexColor(0x3D444D),    // blockquoteBorder
        hexColor(0x4493F8),    // accent - blue
        // Syntax colors (GitHub Dark)
        hexColor(0xFF7B72),    // syntaxKeyword - salmon red
        hexColor(0xA5D6FF),    // syntaxString - light blue
        hexColor(0x9198A1),    // syntaxComment - gray
        hexColor(0x79C0FF),    // syntaxNumber - sky blue
        hexColor(0xD2A8FF),    // syntaxFunction - lavender
        hexColor(0x79C0FF),    // syntaxType - sky blue
        hexColor(0xFF7B72),    // syntaxControlFlow - salmon red
        hexColor(0xD2A8FF),    // syntaxDecorator - lavender
        hexColor(0x79C0FF),    // syntaxConstant - sky blue
        hexColor(0x3FB950),    // syntaxDiffAdd - green
        hexColor(0xFF7B72),    // syntaxDiffRemove - salmon red
        hexColor(0x9198A1)     // syntaxDiffHeader - gray
    },

    // 5. OneDark - Atom One Dark
    {
        L"OneDark", L"Segoe UI", L"Cascadia Code", true,
        hexColor(0x1E222A),    // background
        hexColor(0xABB2BF),    // text
        hexColor(0xC8CCD4),    // heading - lighter
        hexColor(0x61AFEF),    // link - blue
        hexColor(0x98C379),    // code - green
        hexColor(0x282C34),    // codeBackground
        hexColor(0x545862),    // blockquoteBorder
        hexColor(0x61AFEF),    // accent - blue
        // Syntax colors (OneDark)
        hexColor(0xC678DD),    // syntaxKeyword - purple
        hexColor(0x98C379),    // syntaxString - green
        hexColor(0x545862),    // syntaxComment - gray
        hexColor(0xD19A66),    // syntaxNumber - orange
        hexColor(0x61AFEF),    // syntaxFunction - blue
        hexColor(0xE5C07B),    // syntaxType - yellow
        hexColor(0xC678DD),    // syntaxControlFlow - purple
        hexColor(0xE5C07B),    // syntaxDecorator - yellow
        hexColor(0xD19A66),    // syntaxConstant - orange
        hexColor(0x98C379),    // syntaxDiffAdd - green
        hexColor(0xE06C75),    // syntaxDiffRemove - red
        hexColor(0x545862)     // syntaxDiffHeader - gray
    },

    // 6. Ayu Dark
    {
        L"Ayu Dark", L"Segoe UI", L"Cascadia Code", true,
        hexColor(0x0B0E14),    // background
        hexColor(0xC9C7BE),    // text
        hexColor(0xE6E1CF),    // heading - brighter
        hexColor(0x36A3D9),    // link - blue
        hexColor(0xAAD84C),    // code - green
        hexColor(0x1C1F25),    // codeBackground
        hexColor(0x2B2E34),    // blockquoteBorder
        hexColor(0x36A3D9),    // accent - blue
        // Syntax colors (Ayu Dark)
        hexColor(0xFFB454),    // syntaxKeyword - orange
        hexColor(0xAAD84C),    // syntaxString - green
        hexColor(0x54575D),    // syntaxComment - gray
        hexColor(0xFFEE99),    // syntaxNumber - yellow
        hexColor(0xFFA455),    // syntaxFunction - orange
        hexColor(0x56C3F9),    // syntaxType - blue
        hexColor(0xFFB454),    // syntaxControlFlow - orange
        hexColor(0xE6B673),    // syntaxDecorator - gold
        hexColor(0xFFEE99),    // syntaxConstant - yellow
        hexColor(0xAAD84C),    // syntaxDiffAdd - green
        hexColor(0xF07171),    // syntaxDiffRemove - red
        hexColor(0x54575D)     // syntaxDiffHeader - gray
    },

    // 7. VS Code Dark
    {
        L"VS Code Dark", L"Segoe UI", L"Cascadia Code", true,
        hexColor(0x1E1E1E),    // background
        hexColor(0xD4D4D4),    // text
        hexColor(0xFFFFFF),    // heading - white
        hexColor(0x569CD6),    // link - blue
        hexColor(0x9CDCFE),    // code - light cyan
        hexColor(0x262626),    // codeBackground
        hexColor(0x3C3C3C),    // blockquoteBorder
        hexColor(0x569CD6),    // accent - blue
        // Syntax colors (VS Code Dark+)
        hexColor(0x569CD6),    // syntaxKeyword - blue
        hexColor(0xCE9178),    // syntaxString - orange-brown
        hexColor(0x6A9955),    // syntaxComment - green
        hexColor(0xB5CEA8),    // syntaxNumber - light green
        hexColor(0xDCDCAA),    // syntaxFunction - yellow
        hexColor(0x4EC9B0),    // syntaxType - teal
        hexColor(0xC586C0),    // syntaxControlFlow - pink
        hexColor(0xDCDCAA),    // syntaxDecorator - yellow
        hexColor(0x4FC1FF),    // syntaxConstant - bright blue
        hexColor(0x6A9955),    // syntaxDiffAdd - green
        hexColor(0xF44747),    // syntaxDiffRemove - red
        hexColor(0x858585)     // syntaxDiffHeader - gray
    }
};

const int THEME_COUNT = sizeof(THEMES) / sizeof(THEMES[0]);
